# Cha Syntax:

The following is a comprehensive list of all keywords & syntax guidlines of Cha, why they were chosen, and how they improve code portability.

## Language key
 * `@` -- Variable Prefix
 * `:` -- Variable Name Suffix (Direct Variable Location)
 * `=` -- Variable Assignment
 * `$` -- Platform Namespace Prefix
 * `>` -- UNUSED
 * `#` -- UNUSED
 * `%` -- UNUSED
 * `;` -- Instruction Ending
 * `,` -- Argument Separator
 * `*` -- Namespace Wildcard
 * `\` -- Escape Sequence
 * `.` -- Object Addressing
 * `::` -- Variable Namespace Separator
 * `//` -- In-line Comment
 * `/*...*/` -- Multi-line Comment
 * `enc" ... "` or `" ... "` -- String Alias
 * `enc' ... '` or `' ... '` -- Alternate String Alias
 * `{ ... }` -- Variable Namespace Definition
 * `[ ... ]` -- Array Assignment
 * `( ... )` -- Object Assignment

## Shorthand key
***Warning:*** Shorthand subject to micro-optimization features and platform auto-detection unless the argument `--no-micro` is specified.

### Math operators
 | Operator   | Description               |
 |:----------:|:--------------------------|
 | `+`        | Addition Operator         |
 | `-`        | Subtraction Operator      |
 | `*`        | Multiplication Operator   |
 | `/`        | Division Operator         |
 | `**`       | Exponential Operator      |
 | `&`        | Binary AND Operator       |
 | `&#124;`   | Binary OR Operator        |
 | `^`        | Binary XOR Operator       |
 | `!`        | Binary NOT Operator       |
 | `( ... )`  | Expression Prioritization |

**For ASCII readers:** * `|` is the binary OR Operator. *

### Logical operators
 | Operator          | Description                       |
 |-------------------|-----------------------------------|
 | `&&`              | Logical AND Operator              |
 | `&#124;&#124;`    | Logical OR Operator               |
 | `... ? ... : ...` | Ternary Operator                  |
 | `>`               | Greater than Operator             |
 | `<`               | Less Than Operator                |
 | `==`              | Equal to Operator                 |
 | `>=`              | Greater Than or Equal to	Operator |
 | `<=`              | Less than or Equal to Operator    |

 **For ASCII readers:**  `||` is the logical OR Operator.
