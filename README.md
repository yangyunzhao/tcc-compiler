# tcc-compiler
> - [中文文档](README.cn.md)
- This repository hosts a comprehensive learning project focused on compiler development, with the ultimate goal of creating a compiler akin to that of the C++ language. 
- The project encompasses manual development of both the lexical analyzer and the syntax parser, intentionally eschewing automated tools such as flex and bison in favor of a hands-on approach to understanding the intricacies of compiler construction. 
- The initiative plans to interface with LLVM to generate executable programs, marking a significant milestone in the project's progression. Initially, the project aims to implement a subset of the C language, providing a solid foundation upon which to incrementally expand the syntax rules. 
- This ambitious educational venture not only aims to deepen understanding of compiler mechanics but also to cultivate comprehensive skills in compiler design and implementation.

## Phase 1 Objectives

### Key Features

The primary features targeted in this phase include:

- **Keywords**: The compiler will recognize a limited set of essential keywords, including `int`, `void`, `main`, `return`, and `print`. These keywords form the backbone of the language's structure, allowing for the definition of variable types, functions, and control flow mechanisms.
- **Identifiers**: Support for identifiers is not included in this phase. Future updates will introduce the ability to define and use variable names and other identifiers within the language.
- **Numeric Constants**: Sequences composed solely of digits will be recognized as numeric constants, providing the ability to include literal numeric values in expressions.
- **Operators**: The compiler will support basic arithmetic operations, represented by the operators `+` (addition), `-` (subtraction), `*` (multiplication), `/` (division), and the handling of parentheses `(`, `)` for grouping expressions to override the default precedence of operations.
- **Braces and Semicolons**: The compiler will adhere to the C/C++ convention of using curly braces `{`, `}` to enclose the body of functions, and semicolons `;` to mark the end of statements. This feature ensures that the structure of code blocks and the termination of statements are clearly defined.
- **Whitespace Characters**: Spaces, tabs, and newline characters will be recognized as whitespace, used to separate tokens in the source code. These characters, while essential for the readability and organization of code, do not represent tokens themselves.
- **Comments**: Support for comments will not be included in this phase, focusing instead on the core constructs of the language.

### Compilation Strategy

Upon completion of the lexical, syntax, and semantic analyses, an Abstract Syntax Tree (AST) will be generated. This AST will then be transformed through two distinct pathways to produce executable programs:

1. **Conversion to C/C++**: The AST will be converted into equivalent C or C++ code, which will subsequently be compiled using GCC to produce an executable program. This approach provides a straightforward method to validate the correctness of the AST and the overall compiler logic.
2. **Conversion to Intermediate Representation (IR)**: The AST will be transformed into an Intermediate Representation (IR), leveraging the LLVM compiler infrastructure to generate executable programs. This pathway marks a significant milestone, illustrating the project's ability to interface with sophisticated compiler technologies and laying the foundation for more advanced features and optimizations.

### Test Cases for Phase 1

- To validate the functionality and accuracy of the compiler developed in the first phase, the following test cases will be used. These examples are designed to demonstrate the compiler's ability to handle basic arithmetic expressions and function definitions according to the specifications outlined for this phase.

#### Test Case 1:

```cpp
int main() {
    print(1+2);
}
```

- This test case checks the compiler's capability to parse and execute a simple arithmetic expression within a `print` function call. It also tests the handling of the `int main()` function structure, which serves as the entry point of a TinyC program.

#### Test Case 2:

```cpp
int main() {
    print((12+5)*3/2);
}
```

- The second test case is slightly more complex, involving multiple arithmetic operations with parentheses to dictate the order of operations. This test is designed to verify the compiler's ability to correctly interpret arithmetic expressions involving addition, subtraction, multiplication, and division, as well as its handling of operator precedence and associativity.



