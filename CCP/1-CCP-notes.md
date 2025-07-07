# Table of content.

## <h1 style="color: red;"> 3 July 2025 (Day 1)</h1>

## some stuff about java
* Java is platform independent because code compiles to bytecode, which runs on any system with a JVM.
* The Java compiler (`javac`) translates source code into `.class` files containing bytecode.
* Java supports automatic memory management via garbage collection.
* Strongly typed and object-oriented, promoting code reusability and security.

### jdk>>jre>>jvm
* **JDK (Java Development Kit):** Complete package for Java development (compiler, debugger, JRE, etc.).
* **JRE (Java Runtime Environment):** Provides libraries and JVM to run Java applications.
* **JVM (Java Virtual Machine):** Executes Java bytecode, enabling platform independence.

## JVM architecture


## How to Take Input in Java

In Java, input can be taken from the user using several classes, with `Scanner` being the most commonly used for console input.

### Using the `Scanner` Class

1. **Import the Scanner class:**
    ```java
    import java.util.Scanner;
    ```

2. **Create a Scanner object:**
    ```java
    Scanner sc = new Scanner(System.in);
    ```

3. **Read different types of input:**
    - Read an integer:
      ```java
      int num = sc.nextInt();
      ```
    - Read a string (single word):
      ```java
      String word = sc.next();
      ```
    - Read a line (including spaces):
      ```java
      String line = sc.nextLine();
      ```

4. **Close the Scanner:**
    ```java
    sc.close();
    ```

### Using `BufferedReader` and `InputStreamReader`

This method is useful for reading text efficiently, especially in competitive programming.

```java
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class InputBufferedReader {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter your name: ");
        String name = br.readLine();
        System.out.print("Enter your age: ");
        int age = Integer.parseInt(br.readLine());
        System.out.println("Hello, " + name + ". You are " + age + " years old.");
        br.close();
    }
}
```

### Using `Console` Class

The `Console` class can be used for reading input, especially passwords securely. Note: It may not work in some IDEs.

```java
import java.io.Console;

public class InputConsole {
    public static void main(String[] args) {
        Console console = System.console();
        if (console != null) {
            String name = console.readLine("Enter your name: ");
            System.out.println("Hello, " + name);
        } else {
            System.out.println("Console not available.");
        }
    }
}
```

### Notes

- Always close input streams/readers after use to free resources.
- `Scanner` is easier for beginners, while `BufferedReader` is faster for large input.
- `Console` is useful for secure input but may not be available in all environments.
- For reading multiple types of input, be aware of input buffer issues (e.g., after `nextInt()`, use `sc.nextLine()` to consume the leftover newline).


## Questions
* what is stream in java that stuff returns.