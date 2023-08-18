
package com.mycompany.testeeee;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import org.json.JSONArray;

public class Main {
    
    public static void main(String[] args) throws FileNotFoundException {
        
        String data = "";
        File file = new File("dados.json");
        
        Scanner scan = new Scanner(file);
        
        while (scan.hasNext()) {
            data += scan.nextLine();
        }
        
        System.out.println(data);
        
        JSONArray example = new JSONArray(data);

        System.out.println(example.get(0));
        //System.out.println(example.get(0));
        
    }
    
}
