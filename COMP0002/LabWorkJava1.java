import java.util.ArrayList;

import java.util.Collections;

import java.util.Random;

public class LabWork {

    //Q1
    public void inputTillStop(){
        Input test = new Input();
        while(true){
            System.out.print("Input a string: ");
            String input = test.next();
            if(input.compareToIgnoreCase("stop") == 0){
                System.out.println("Halting...");
                break;
            }
        }
    }


    //Q2
    double[] numArray = new double[10];

    private double[] inputDoubles()
    {
        Input in = new Input();
        for (int n = 0; n < numArray.length; n++)
        {
            System.out.print("Enter double (" + (n+1) + ") : ");
            double value = in.nextDouble();
            numArray[n] = value;
        }
        return numArray;
    }

    private void average(double[] numArray)
    {
        double sum = 0;
        for (double n : numArray){
            sum += n;
        }
        double average = sum / numArray.length;
        System.out.println("Average: " + average);
    }


    //Q3
    private ArrayList<String> words = new ArrayList<>();

    private void reverseInputStr()
    {
        Input in = new Input();
        for(int i = 0; i < 10; i++){
            System.out.print("Input a word: ");
            String text = in.next();
            words.add(text);
        }
        Collections.sort(words, Collections.reverseOrder());

        for(String word : words){
            System.out.println(word);
        }
    }


    //Q4
    private void manyNums(){
        double max = 0;
        double min = 0;
        double sum = 0;
        double num = 0;
        boolean sign = true;

        for (int i = 0; i < 10000; i++){
            num = new Random().nextDouble();
            sign = new Random().nextBoolean();
            if(!sign){
                num *= -1;
            }
            sum += num;
            if(num > max){
                max = num;
            }
            if (num < min){
                min = num;
            }
        }

        System.out.println("Max: " + max);
        System.out.println("Min: " + min);
        System.out.println("Average: " + (sum / 10000));
    }


    //Q5+6
    private double inDouble()
    {
        Input in = new Input();
        System.out.print("Input a double: ");
        double num = in.nextDouble();
        return num;
    }

    private double doubleSqrt(double num1, double num2)
    {
        return Math.sqrt(num1 + num2);
    }

    private void curry()
    {
        System.out.println(doubleSqrt(inDouble(), inDouble()));
    }


    //Q7
    private String toBase(int n, int b)
    {
        int max = 0;
        String newstring = "";

        for(int i = 0; i < n; i++)
        {
            if (n - Math.pow(b,i) <= 0){
                max = i;
                break;
            }
        }

        int answer = 0;
        int index = max;
        for(int i = 0; i < index; i++){
            answer = (int)(n/Math.pow(b,max-1));
            newstring += String.valueOf(answer);
            max -= 1;
            if(answer != 0){
                n -= Math.pow(b,max);
            }
        }
        return newstring;
    }


    //Q8
    private double mmToFeet(double mm){
        return mm / 304.8;
    }

    private double mToInch(double m){
        return m * 39.37;
    }

    private double kmToYards(double km){
        return km * 1094;
    }

    private void convertor(){
        Input choice = new Input();
        while(true){
            System.out.println("Please select an option:");
            System.out.println("1. Convert millimetres to feet.");
            System.out.println("2. Convert meters to inches.");
            System.out.println("3. Convert kilometers to yards.");
            System.out.println("4. Quit");

            int selection = choice.nextInt();

            if (selection == 4){
                System.out.println("Ending convertor...");
                break;
            }

            System.out.println("Please input value");
            double value = choice.nextDouble();

            switch(selection){
                case 1:
                    System.out.println(mmToFeet(value));
                    break;
                case 2:
                    System.out.println(mToInch(value));
                    break;
                case 3:
                    System.out.println(kmToYards(value));
                    break;
            }
        }
    }


    //Q9
    private void palidromeCheck(int n)
    {
        String num = String.valueOf(n);
        String reverseNum = "";

        for(int i = num.length()-1; i >= 0; i--){
            reverseNum += num.charAt(i);
        }

        if(num.compareTo(reverseNum) == 0){
            System.out.println("Is a palidrome number!");
        }
        else{
            System.out.println("Not a palidrome number!");
        }
    }

    //Q10
    private boolean charCheck(char val){
        char[] invalidChars = {' ', '.', '!', '?', ','};
        for (char i : invalidChars) {
            if (val == i)
            {
                return false;
            }
        }
        return true;
    }

    private void robustPaildrome(String text)
    {
        String cleanText = "";
        String reverseText = "";
        text = text.toLowerCase();

        for(int i = 0; i < text.length(); i++)
        {
            if(charCheck(text.charAt(i)))
            {
                cleanText += text.charAt(i);
            }
        }

        for(int i = cleanText.length()-1; i >= 0; i--){
            reverseText += cleanText.charAt(i);
        }

        if(cleanText.compareTo(reverseText) == 0){
            System.out.println("Is a palidrome!");
        }
        else{
            System.out.println("Not a palidrome!");
        }

    }


    //Q11

    private void displayFileContent(String filename)
    {
        FileInput fileIn = new FileInput(filename);
        int[] count = new int[26];
        while (fileIn.hasNextLine())
        {
            String s = fileIn.nextLine();
            for(char c : s.toCharArray())
            {
                c = Character.toLowerCase(c);
                int val = (int)c - 97;
                if (val > 0 && val < 27){
                    count[val]++;
                }
            }
        }
        for(int i = 1; i < 26; i++) {
            System.out.println((char)(i+97) + " appeared " + count[i] + " times."); //check
        }
        fileIn.close(); // Always close a file after it has been used.
    }


    //Q12
    private void reverseFile(String filename)
    {
        FileInput fileIn = new FileInput(filename);

        String fileInLine = "";
        while (fileIn.hasNextLine())
        {
            String s = fileIn.nextLine();
            fileInLine = fileInLine + s + "\n";
            System.out.print(fileInLine); //testing
        }

        fileIn.close(); // Always close a file after it has been used.

        FileOutput fileOut = new FileOutput(filename);
        String reverseFile = "";

        for(int i = fileInLine.length()-1; i >= 0; i--)
        {
            reverseFile += fileInLine.charAt(i);
            System.out.print(fileInLine.charAt(i)); //testing
        }

        fileOut.writeString(reverseFile);
        fileOut.close();

    }


    //Q13
    private void paliFileCheck(String filename)
    {
        FileInput fileIn = new FileInput(filename);
        while (fileIn.hasNextLine())
        {
            String s = fileIn.nextLine();
            System.out.print(s + " : ");
            robustPaildrome(s);
        }
        fileIn.close();
    }


    //Q14
    private void centerLine()
    {
        Input in = new Input();
        System.out.print("Please enter your name: ");
        String name = in.nextLine();
        int buffer = (80 - name.length())/2 ;
        String gap = "";
        for(int i = 0; i < buffer; i++)
        {
            gap += " ";
        }
        System.out.println(gap + name + gap);
    }


    //Q15
    private int rangedProduct(int a, int b)
    {
        if (b == a)
        {
            return a;
        }

        return b * rangedProduct(a, b-1);
    }


    //Q16
    private int[] countChar(String text)
    {
        int[] count = new int[26];

        for(char c : text.toCharArray())
        {
            c = Character.toLowerCase(c);
            int val = (int)c - 97;
            if (val > 0 && val < 27){
                count[val]++;
            }
        }
        return count;
    }

    private boolean stringCompare(String a, String b)
    {
        boolean flag = true;
        int[] countA = countChar(a);
        int[] countB = countChar(b);
        for (int i = 0 ; i < 26 ; i++)
        {
          if (countA[i] != countB[i])
          {
              flag = false;
          }
        }
        return flag;
    }


    //Q17
    private boolean testIfPrime(long num)
    {
        int limit = (int) Math.sqrt(num);
        boolean flag = true;
        for(int i = 2; i <= limit; i++)
        {
            if(num % i == 0){
                flag = false;
            }
        }
        return flag;
    }


    //Q18
    private void verbaliseNum(long num)
    {
        
    }

    public static void main(String[] args){
        boolean trial = new LabWork().testIfPrime(367);
        System.out.println(trial);
    }
}
