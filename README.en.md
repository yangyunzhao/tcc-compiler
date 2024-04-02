# tcc-compiler
- This repository hosts a comprehensive learning project focused on compiler development, with the ultimate goal of creating a compiler akin to that of the C++ language. 
- The project encompasses manual development of both the lexical analyzer and the syntax parser, intentionally eschewing automated tools such as flex and bison in favor of a hands-on approach to understanding the intricacies of compiler construction. 
- The initiative plans to interface with LLVM to generate executable programs, marking a significant milestone in the project's progression. Initially, the project aims to implement a subset of the C language, providing a solid foundation upon which to incrementally expand the syntax rules. 
- This ambitious educational venture not only aims to deepen understanding of compiler mechanics but also to cultivate comprehensive skills in compiler design and implementation.

## Phase 1 Objectives

### Key Features

The primary features targeted in this phase include:

- **Keywords**: The compiler will recognize a limited set of keywords essential for basic functionality, including `int`, `void`, `main`, `return`, and `print`.
- **Identifiers**: Support for identifiers will not be included in this phase.
- **Numeric Constants**: Sequences composed of digits will be recognized as numeric constants.
- **Operators**: The compiler will support basic arithmetic operations, including addition (`+`), subtraction (`-`), multiplication (`*`), division (`/`), and the handling of parentheses (`(`, `)`).
- **Whitespace Characters**: Spaces, tabs, and newline characters will be recognized as whitespace characters used to separate lexical units, though they will not be treated as lexical units themselves.
- **Comments**: Support for comments will not be included in this phase, focusing attention on the core language constructs.

### Compilation Strategy

Upon completion of the lexical, syntax, and semantic analyses, an Abstract Syntax Tree (AST) will be generated. This AST will then be transformed through two distinct pathways to produce executable programs:

1. **Conversion to C/C++**: The AST will be converted into equivalent C or C++ code, which will subsequently be compiled using GCC to produce an executable program. This approach provides a straightforward method to validate the correctness of the AST and the overall compiler logic.
2. **Conversion to Intermediate Representation (IR)**: The AST will be transformed into an Intermediate Representation (IR), leveraging the LLVM compiler infrastructure to generate executable programs. This pathway marks a significant milestone, illustrating the project's ability to interface with sophisticated compiler technologies and laying the foundation for more advanced features and optimizations.
