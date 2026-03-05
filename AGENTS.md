# AGENTS.md

This document provides guidelines and commands for agentic coding agents operating within this repository. Adhering to these guidelines ensures consistency, maintainability, and efficient collaboration.

## 1. Build, Lint, and Test Commands

This section outlines the essential commands for building, linting, and testing the codebase. These commands are crucial for maintaining code quality and ensuring functionality.

### Build Commands

- **General Build:**
  - `npm run build` (if using npm)
  - `yarn build` (if using yarn)
  - `make build` (if using Makefiles)
  - (Add project-specific build commands here)

### Linting Commands

- **General Linting:**
  - `npm run lint` (if using npm)
  - `yarn lint` (if using yarn)
  - `make lint` (if using Makefiles)
  - (Add project-specific linting commands here)

### Testing Commands

- **Run All Tests:**
  - `npm test` (if using npm)
  - `yarn test` (if using yarn)
  - `make test` (if using Makefiles)

- **Run a Single Test:**
  - **Jest (JavaScript/TypeScript):**
    `npm test -- -t "test name pattern"` or `yarn test -t "test name pattern"`
    Example: `npm test -- -t "User authentication"`
  - **Pytest (Python):**
    `pytest tests/path/to/test_file.py::test_function_name`
    Example: `pytest tests/test_auth.py::test_login_success`
  - **Go (Go):**
    `go test ./... -run TestFunctionName`
    Example: `go test ./... -run TestUserCreation`
  - (Add project-specific single test commands here)

## 2. Code Style Guidelines

Consistency in code style is paramount for readability and maintainability. Adhere to the following guidelines:

### Imports

- **Order:** Group imports logically (e.g., standard library, third-party, project-specific).
- **Alphabetical:** Within each group, sort imports alphabetically.
- **Specificity:** Avoid wildcard imports (`import * as ...`); prefer specific imports.

### Formatting

- **Indentation:** Use spaces (typically 2 or 4) for indentation. Ensure consistency.
- **Line Length:** Keep lines reasonably short (e.g., 80-120 characters).
- **Braces:** Use consistent brace style (e.g., K&R or Allman).
- **Whitespace:** Use whitespace judiciously around operators and after commas for readability.

### Types

- **Static Typing:** Utilize static typing where available (e.g., TypeScript, Python type hints, Java types).
- **Clarity:** Type definitions should be clear and accurately reflect the data they represent.
- **Readability:** Prefer clear, descriptive type names.

### Naming Conventions

- **Variables:** Use camelCase (e.g., `myVariableName`).
- **Constants:** Use SCREAMING_SNAKE_CASE (e.g., `MAX_CONNECTIONS`).
- **Functions/Methods:** Use camelCase (e.g., `getUserData`).
- **Classes/Components:** Use PascalCase (e.g., `UserProfileComponent`).
- **Files:** Use kebab-case or snake_case, consistent with the project.

### Error Handling

- **Explicit Errors:** Use specific error types rather than generic ones.
- **Try-Catch:** Employ try-catch blocks for anticipated error conditions.
- **Return Values:** Consider returning error values or using result types where appropriate.
- **Logging:** Log errors with sufficient context (message, stack trace, relevant data).
- **Avoid Silencing:** Do not swallow errors silently; handle them or propagate them appropriately.

### Comments

- **Purpose, Not What:** Comments should explain *why* something is done, not *what* it does.
- **Conciseness:** Keep comments brief and to the point.
- **Documentation:** Use docstrings (e.g., JSDoc, Python docstrings) for functions, classes, and modules.

## 3. Cursor/Copilot Rules

If Cursor or Copilot specific rules are defined, they should be followed to ensure seamless integration and desired behavior.

- **Cursor Rules:** Check for `.cursor/rules/` or `.cursorrules` directories for specific configuration files. These rules might dictate project-specific behaviors, custom commands, or editing preferences.
- **Copilot Instructions:** Refer to `.github/copilot-instructions.md` for guidance on how Copilot should interact with the codebase, including preferred patterns, security considerations, or specific exclusions.

(Note: This file is a template. Specific commands and guidelines should be filled in based on the actual codebase analysis.)
