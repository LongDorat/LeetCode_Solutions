# LeetCode_Solutions

An archive where I store all the solutions of mine for LeetCode. The aim is to contribute reference documentation and improve my skills simultaneously.

## Feature

- **Language:** C++, C#

## Installation

1. Clone the repository:

   `git clone https://github.com/LongDorat/LeetCode_Solutions`

2. Install every library ready for compile. For simple, install IDE that included all the library such as Visual Studio.

## Project Structure

- `[00001] Example Problem` Store all the solutions for every language supported of one problem.

### C++

- `Project's name.cpp` Main file for compile.
- `library\` library from the language itself such as `System`.
- `class\` store classes.
- `function\` store functions.
- `bin\Debug\` store built console app.

### C#

*This folder now using template from `dotnet new` command without using **program-main**.*

- `Project's name.cs` Main file for compile.
- `class\` store classes.
- `method\` store methods.
- `bin\Debug\net8.0\` store built console app.

## Usage

- Open problem's folder at this directory with your IDE or navigate to it via terminal:

    `{repository address} \ LeetCode_Solutions \ [00001] Example Problem \ {language} \*`

    ***Attention:*** You don't want to open the **repository's folder** itself (`LeetCode_Solutions\*`) OR the **problems's folder** (`[00001] Example Problem\*`) because it might cause problem with compiler.

### C++

- Build the executable under `bin\Debug` folder.

### C#

- Before build the executable, use `restore` command in terminal to restore the project.

    `cd {repository address} \ LeetCode_Solutions \ [00001] Example Problem \ {language} \*`  
    `dotnet restore`

- Build the executable under `bin\Debug\net8.0\` folder.

## Contributing

Contributions to this project are welcome! Please follow these steps to contribute:

1. Create a new branch for your feature or bug fix
2. Make your changes and commit them with descriptive commit messages
3. Push your changes to your fork
4. Submit a pull request to the main repository  
***Recommended forking***

Please ensure that your code adheres to the project's coding standards and includes appropriate tests and documentation.

## License

This project is license under MIT License. For more detail, look at [LICENSE](https://github.com/LongDorat/LeetCode_Solutions/blob/main/LICENSE) file.

## Contact

For support on issue and question, please open an issue on GitHub or contact longdorat@outlook.com.
