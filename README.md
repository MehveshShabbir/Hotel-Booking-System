<p align="center">
  <a href="" rel="noopener">
    <img width=200px height=200px src="https://th.bing.com/th/id/OIP.sS1nDwvglmgQFlpLURaNfwHaHa?rs=1&pid=ImgDetMain" alt="Project logo">
  </a>
</p>

<h3 align="center">Hotel Booking System</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/yourusername/Hotel-Booking-System.svg)](https://github.com/yourusername/Hotel-Booking-System/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/yourusername/Hotel-Booking-System.svg)](https://github.com/yourusername/Hotel-Booking-System/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> A basic C++ hotel booking system utilizing Object-Oriented Programming and file handling to manage bookings, customer data, and hotel information.
    <br> 
</p>

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Deployment](#deployment)
- [Usage](#usage)
- [Built Using](#built_using)
- [Contributing](#contributing)
- [Authors](#authors)
- [Acknowledgments](#acknowledgments)

## 🧐 About <a name = "about"></a>

The Hotel Booking System is a C++ project designed to manage hotel bookings and related operations. It uses Object-Oriented Programming (OOP) principles to structure the code and file handling to read and write data. The system handles functionalities such as booking rooms, managing customer details, and interacting with files that store various pieces of information about admins, customers, and the hotel.

## 🏁 Getting Started <a name = "getting_started"></a>

These instructions will help you get a copy of the project up and running on your local machine for development and testing purposes. For deployment on a live system, refer to [Deployment](#deployment).

### Prerequisites

You need to have the following installed:
- [g++](https://gcc.gnu.org/) - C++ Compiler
-  [Visual Studio Code](https://code.visualstudio.com/) or another code editor of your choice

### Installing

To get the development environment running, follow these steps:

1. **Clone the Repository:**
    ```bash
    git clone https://github.com/MehveshShabbir/Hotel-Booking-System.git
    ```

2. **Navigate to the Project Directory:**
    ```bash
    cd Hotel-Booking-System
    ```

3. **Build the Project:**
    - Open your terminal in Visual Studio Code (or use an external terminal).
    - Run the build task using the command:
      ```bash
      g++ -g src/main.cpp src/hms.cpp -Iinclude -o build/main
      ```

4. **Run the Executable:**
    ```bash
    ./build/main
    ```

## 🔧 Running the tests <a name = "tests"></a>

The project does not include automated tests. However, you can manually test the system by interacting with the executable and verifying the functionalities.

### Break down into end-to-end tests

Manual testing includes:
- Booking a room and checking if details are correctly saved.
- Managing customer data and verifying file updates.
- Checking file handling operations by reviewing data in `data/` directory.

### Coding style tests

No specific coding style tests are included. Ensure that your code adheres to the C++ coding standards and practices for readability and maintainability.

## 🎈 Usage <a name="usage"></a>

Run the executable and follow the on-screen instructions to manage hotel bookings, view and update customer details, and interact with the system's features.

## 🚀 Deployment <a name = "deployment"></a>

For deployment on a live system:
- Package the executable and required data files.
- Ensure that all dependencies (like `g++`) are available on the deployment machine.
- Configure the deployment environment as per the system requirements.

## ⛏️ Built Using <a name = "built_using"></a>

- [g++](https://gcc.gnu.org/) - C++ Compiler
- [Visual Studio Code](https://code.visualstudio.com/) - Code Editor

## ✍️ Contributing <a name = "contributing"></a>

Contributions are welcome. Please submit a pull request with your changes and include a description of the modifications. Ensure that the code follows the project's coding standards and passes all tests.

## ✨ Authors <a name = "authors"></a>

- [Mehvesh Shabbir](https://github.com/MehveshShabbir) - Idea & Initial Work




