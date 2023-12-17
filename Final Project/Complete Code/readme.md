# Project Report: Accessible Dictionary In C

## Proposal Idea

The project aims to create an accessible dictionary in C, providing users with features to search for words, add new entries, and maintain a user-friendly interface. The dictionary includes a login screen for security and an intuitive menu for easy navigation.

## Data Structures Used

The primary data structure used in this project is an array of structures (`struct lib`), where each structure represents a dictionary entry, including fields for word, meaning, part of speech, and a sentence.

## Major Problems Faced

1. **File Handling**: Ensuring proper file operations for reading and writing dictionary entries.
2. **User Authentication**: Implementing a secure login screen and handling log in attempts.

### Resolution

1. File handling issues were resolved by carefully managing file pointers and utilizing proper modes for reading and writing.
2. User authentication problems were addressed by implementing a login screen with a limited number of attempts.

## Major Logic/Algorithm Used

### Login Screen Logic

The login screen utilizes a password-based authentication system. Users are allowed a limited number of attempts, and after exceeding the limit, access is restricted.

### Search Function Algorithm

The search function reads from the dictionary file and compares the entered word with the existing entries. It displays the results in a formatted manner.

### Adding New Words Algorithm

The `new1` function collects user input for a new word, meaning, part of speech, and sentence. It appends the entry to the dictionary file.

## Complexity and Potential Improvements

1. **Login Screen Complexity**: The current implementation uses a basic password system. Future improvements could include more robust authentication mechanisms.
2. **Search Function Complexity**: The search function iterates through the entire dictionary file. For large datasets, an indexing mechanism could enhance search efficiency.

## GitHub Contributions

The project's GitHub repository showcases individual contributions from:
- [Sajid Ali](https://github.com/NUCES-Khi/pfproject-team-bombastic/blob/main/Final%20Project/Parts/Code%231.c) (Code #1)
- [Saif Ur Rehman](https://github.com/NUCES-Khi/pfproject-team-bombastic/blob/main/Final%20Project/Parts/Code%232.c) (Code #2)
- [Rohan Serwer](https://github.com/NUCES-Khi/pfproject-team-bombastic/blob/main/Final%20Project/Parts/Code%233.c) (Code #3)

## Video Demo on GitHub

A video demonstration of the project can be found [here](https://streamable.com/chr4xl).

