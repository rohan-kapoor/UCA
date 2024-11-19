import java.util.*;
import java.io.*;

class A implements Comparable<A> {
    int x;

    A(int x) {
        this.x = x;
    }

    public int compareTo(A y) {
        return Integer.compare(this.x, y.x);
    }
}

public class GenericBST<Key extends Comparable<Key>, Value> {
    class TreeNode {
        Key key;
        Value val;
        TreeNode left;
        TreeNode right;

        TreeNode(Key key, Value val) {
            this.key = key;
            this.val = val;
            this.left = null;
            this.right = null;
        }
    }

    private TreeNode root;

    private TreeNode insert(TreeNode root, Key key, Value val) {
        if (root == null) {
            return new TreeNode(key, val);
        }
        if (key.compareTo(root.key) == 0) {
            root.val = val;
        } else if (key.compareTo(root.key) < 0) {
            root.left = insert(root.left, key, val);
        } else {
            root.right = insert(root.right, key, val);
        }
        return root;
    }

    private Value extract(TreeNode root, Key key) {
        TreeNode cur = root;
        while (cur != null) {
            if (key.compareTo(cur.key) == 0) {
                return cur.val;
            } else if (key.compareTo(cur.key) < 0) {
                cur = cur.left;
            } else {
                cur = cur.right;
            }
        }
        return null;
    }

    private TreeNode leftMax(TreeNode root) {
        TreeNode cur = root;
        while (cur.right != null) {
            cur = cur.right;
        }
        return cur;
    }

    private TreeNode delete(TreeNode root, Key key) {
        if (root == null) {
            return null;
        }
        if (key.compareTo(root.key) == 0) {
            if (root.left == null && root.right == null) {
                return null;
            } else if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            } else {
                TreeNode replace = leftMax(root.left);
                root.key = replace.key;
                root.val = replace.val;
                root.left = delete(root.left, replace.key);
                return root;
            }
        } else if (key.compareTo(root.key) < 0) {
            root.left = delete(root.left, key);
        } else {
            root.right = delete(root.right, key);
        }
        return root;
    }

    public Value get(Key key) {
        return extract(root, key);
    }

    public void put(Key key, Value val) {
        root = insert(root, key, val);
    }

    public void erase(Key key) {
        root = delete(root, key);
    }

    public Key getFloor(Key key){
        TreeNode cur = root;
        Key res = null;
        while(cur != null){
            if(key.compareTo(cur.key) == 0){
                return key;
            }
            else if(key.compareTo(cur.key) > 0){
                res = cur.key;
                cur = cur.right;
            }
            else{
                cur = cur.left;
            }
        }
        return res;
    }

    public static void main(String[] args) {
        GenericBST<A, String> bst = new GenericBST<>();
        GenericBST<Integer, String> obj = new GenericBST<>();

        obj.put(10, "Value1");
        obj.put(5, "Value2");
        obj.put(15, "Value3");
        obj.put(3, "Value4");
        obj.put(7, "Value5");
        obj.put(13, "Value6");
        obj.put(17, "Value7");
        obj.put(1, "Value8");
        obj.put(4, "Value9");
        obj.put(6, "Value10");
        obj.put(8, "Value11");
        obj.put(12, "Value12");
        obj.put(14, "Value13");
        obj.put(16, "Value14");
        obj.put(18, "Value15");


        System.out.println(obj.getFloor(11));
        System.out.println(obj.getFloor(2));
        System.out.println(obj.getFloor(9));
        System.out.println(obj.getFloor(15));
    }
}