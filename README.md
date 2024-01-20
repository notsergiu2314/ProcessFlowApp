# Process Flow Application Readme

## Overview

Welcome to the Process Flow Application! This application is written in C++ and designed to help users visualize and analyze process flows. It provides a user-friendly interface for creating, editing, and analyzing process flows with various steps.

## Compilation

To compile the Process Flow Application on Windows, follow these steps:

1. Open a command prompt or terminal window.

2. Navigate to the directory containing the source code files using the `cd` command. For example:
    ```
    cd path\to\your\process_flow_app
    ```

3. Run the following command to compile the application:
    ```powershell
    c++ .\analyticModule.cpp .\flow.cpp .\main.cpp .\menu.cpp .\stepFactory.cpp -o process_flow_app
    ```

    This command compiles the source code files (`analyticModule.cpp`, `flow.cpp`, `main.cpp`, `menu.cpp`, and `stepFactory.cpp`) and creates an executable named `process_flow_app`.

## Running the Application

After successful compilation, you can run the Process Flow Application by executing the generated executable. Use the following command:
```powershell
.\process_flow_app
```

This will launch the application, and you can start creating and analyzing process flows using the interactive menu.

## Features

The Process Flow Application includes the following features:

- **Create Flow:** Build process flows by adding various steps.
- **Run Flow:** Run process flows step by step.
