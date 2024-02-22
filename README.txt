# Word Count Program

This program reads text input from standard input and provides functionality similar to the Unix `wc` utility. It counts lines, words, characters, and also provides a character frequency table.

## How to Run

1. Ensure you have `g++` installed on your system.
2. Clone this repository to your local machine.
3. Navigate to the directory containing the source files.
4. Run the `make` command to compile the program.

    ```bash
    make
    ```

5. Once the program is compiled successfully, you can run it by piping text input into the executable `WC`.

    ```bash
    cat mytestfile.txt | ./bin/WC
    ```


## Clean Up

You can clean up the compiled files by running:

```bash
make clean