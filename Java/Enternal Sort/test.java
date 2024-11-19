import java.io.IOException;
import java.util.Random;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;

public class test {

    public static void main(String[] args) throws IOException {
        File f = new File("./input.txt");
        BufferedWriter bw = new BufferedWriter(new FileWriter(f));
        Random r = new Random();
        for(int i = 0; i < 200; i++) {
            bw.write(r.nextInt(200)+"");
            bw.newLine();
        }
        bw.close();
        System.out.println(f.length());
        System.out.println(Runtime.getRuntime().freeMemory());

    }
}