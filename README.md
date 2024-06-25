## CIO (C Input/Output) Library Documentation

### Overview
The CIO (C Input/Output) library aims to simplify the process of handling input and output operations in C programs. It provides functions for reading and writing various data types, including integers, floating-point numbers, characters, and strings. Additionally, it includes functions for file handling.

### Version
- **Current Version**: 0.1

### Author
- **Diego Moreira**

### License
- **MIT License**

### Global Variables
- `int cioerr`: Indicates the occurrence of an error in input functions. A value of `1` indicates an error, and `0` indicates success.

### Function Prototypes

#### Input/Output Functions

##### Integer (int)
- `int get_int()`: Reads an integer from standard input.
- `int sget_int(char *s)`: Prompts with a string and reads an integer from standard input.
- `void put_int(int i)`: Writes an integer to standard output.

##### Unsigned Integer (unsigned int)
- `unsigned int get_uint()`: Reads an unsigned integer from standard input.
- `unsigned int sget_uint(char *s)`: Prompts with a string and reads an unsigned integer from standard input.
- `void put_uint(unsigned int i)`: Writes an unsigned integer to standard output.

##### Long (long)
- `long get_long()`: Reads a long integer from standard input.
- `long sget_long(char *s)`: Prompts with a string and reads a long integer from standard input.
- `void put_long(long l)`: Writes a long integer to standard output.

##### Unsigned Long (unsigned long)
- `unsigned long get_ulong()`: Reads an unsigned long integer from standard input.
- `unsigned long sget_ulong(char *s)`: Prompts with a string and reads an unsigned long integer from standard input.
- `void put_ulong(unsigned long l)`: Writes an unsigned long integer to standard output.

##### Long Long (long long)
- `long long get_llong()`: Reads a long long integer from standard input.
- `long long sget_llong(char *s)`: Prompts with a string and reads a long long integer from standard input.
- `void put_llong(long long ll)`: Writes a long long integer to standard output.

##### Unsigned Long Long (unsigned long long)
- `unsigned long long get_ullong()`: Reads an unsigned long long integer from standard input.
- `unsigned long long sget_ullong(char *s)`: Prompts with a string and reads an unsigned long long integer from standard input.
- `void put_ullong(unsigned long long ll)`: Writes an unsigned long long integer to standard output.

##### Short (short)
- `short get_short()`: Reads a short integer from standard input.
- `short sget_short(char *s)`: Prompts with a string and reads a short integer from standard input.
- `void put_short(short s)`: Writes a short integer to standard output.

##### Unsigned Short (unsigned short)
- `unsigned short get_ushort()`: Reads an unsigned short integer from standard input.
- `unsigned short sget_ushort(char *s)`: Prompts with a string and reads an unsigned short integer from standard input.
- `void put_ushort(unsigned short s)`: Writes an unsigned short integer to standard output.

##### Float (float)
- `float get_float()`: Reads a float from standard input.
- `float sget_float(char *s)`: Prompts with a string and reads a float from standard input.
- `void put_float(float f)`: Writes a float to standard output.

##### Double (double)
- `double get_double()`: Reads a double from standard input.
- `double sget_double(char *s)`: Prompts with a string and reads a double from standard input.
- `void put_double(double d)`: Writes a double to standard output.

##### Long Double (long double)
- `long double get_ldouble()`: Reads a long double from standard input.
- `long double sget_ldouble(char *s)`: Prompts with a string and reads a long double from standard input.
- `void put_ldouble(long double ld)`: Writes a long double to standard output.

##### Character (char)
- `char get_char()`: Reads a character from standard input.
- `char sget_char(char *s)`: Prompts with a string and reads a character from standard input.
- `void put_char(char c)`: Writes a character to standard output.

##### Unsigned Character (unsigned char)
- `unsigned char get_uchar()`: Reads an unsigned character from standard input.
- `unsigned char sget_uchar(char *s)`: Prompts with a string and reads an unsigned character from standard input.
- `void put_uchar(unsigned char c)`: Writes an unsigned character to standard output.

##### String (char*)
- `void get_string(char *s)`: Reads a string from standard input.
- `void sget_string(char *sg, char *s)`: Prompts with a string and reads a string from standard input.
- `void put_string(char *s)`: Writes a string to standard output.

#### Utility Functions
- `void clear_in()`: Clears the input buffer.
- `void newline(int cout)`: Prints a specified number of newline characters.

#### File Handling Functions
- `int rf_content(char *d, char *s, int b)`: Reads the content of a file into a buffer.
- `int wf_content(char *d, char *s)`: Writes a string to a file.

### Usage Examples

#### Reading and Writing an Integer
```c
int main() {
    int number = sget_int(Enter an integer: ");
    
    if (cioerr) {
        put_string("Invalid input.\n");
    } else {
        put_steing("You entered: ");
        put_int(number);
        newline(1);
    }
    return 0;
}
```

#### Reading and Writing a String
```c
int main() {
    char str[100];
    sget_string(Enter a string: , str);
    if (cioerr) {
        put_string("Invalid input.\n");
    } else {
        put_string("You entered: ");
        put_string(str);
        newline(1);
    }
    return 0;
}
```

#### Reading from and Writing to a File
```c
int main() {
    char content[256];
    if (rf_content("input.txt", content, 256) == 0) {
        put_string("File content: \n");
		put_string(content);
    } else {
        put_string("Error reading file.\n");
    }

    if (wf_content("output.txt", "Hello, CIO!") == 0) {
        put_string("Content written to file successfully.\n");
    } else {
        put_string("Error writing to file.\n");
    }

    return 0;
}
```

### Error Handling
All input functions set the `cioerr` variable to `1` in case of an error, such as invalid input or out-of-range values. The user should check `cioerr` after each input operation to ensure successful data retrieval.

This library provides a simple interface for common input/output operations in C, reducing the amount of repetitive code needed for handling different data types and improving code readability.
