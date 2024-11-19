import java.io.*;
import java.util.*;
import java.util.regex.*;

public class MaxFrequency {
    
    // Node class to represent each word and its frequency in the BST
    class Node {
        String word;        // Word itself
        Integer frequency;  // Frequency of the word
        Node left, right;   // Left and right children

        Node(String word, Integer frequency) {
            this.word = word;
            this.frequency = frequency;
            this.left = null;
            this.right = null;
        }
    }

    // Root of the BST
    private Node root;

    // Method to insert a word into the BST
    public void insert(String word) {
        root = insert(root, word);
    }

    private Node insert(Node node, String word) {
        if (node == null) {
            return new Node(word, 1);  // Create a new node with frequency 1
        }

        // Compare the current word with the node's word
        int cmp = word.compareTo(node.word);
        if (cmp < 0) {
            node.left = insert(node.left, word);  // Go left if the word is smaller
        } else if (cmp > 0) {
            node.right = insert(node.right, word);  // Go right if the word is larger
        } else {
            node.frequency++;  // If the word already exists, increment the frequency
        }

        return node;
    }

    // Method to find the word with the maximum frequency and return its frequency
    public String findMaxFrequencyWord() {
        return findMaxFrequencyWord(root);
    }

    private String findMaxFrequencyWord(Node node) {
        if (node == null) return null;

        // Initialize variables to track max frequency and the corresponding word
        String maxWord = node.word;
        int maxFrequency = node.frequency;

        // Traverse the tree to find the max frequency word
        Queue<Node> queue = new LinkedList<>();
        queue.add(node);

        while (!queue.isEmpty()) {
            Node current = queue.poll();

            if (current.frequency > maxFrequency) {
                maxFrequency = current.frequency;
                maxWord = current.word;
            }

            if (current.left != null) queue.add(current.left);
            if (current.right != null) queue.add(current.right);
        }

        // Return both the word and its frequency
        return maxWord + " with frequency " + maxFrequency;
    }

    // Method to read the file and process words
    public void processFile(String filename) {
        try (BufferedReader br = new BufferedReader(new FileReader(filename))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] words = line.split("\\s+");  // Split by spaces
                
                for (String word : words) {
                    word = word.toLowerCase();  // Convert to lowercase
                    word = word.replaceAll("[^a-zA-Z]", "");  // Remove punctuation
                    
                    // Only insert words with length >= 10
                    if (word.length() >= 10) {
                        insert(word);  // Insert the valid word into the BST
                    }
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        MaxFrequency bst = new MaxFrequency();
        
        // Specify the path to your file
        String filename = "leipzig1m.txt";
        
        // Process the file and insert words into the BST
        bst.processFile(filename);
        
        // Find the word with the highest frequency
        String result = bst.findMaxFrequencyWord();
        
        // Output the result (word and frequency)
        if (result != null) {
            System.out.println("The most frequent word with length >= 10 is: " + result);
        } else {
            System.out.println("No words with length >= 10 found.");
        }
    }
}
