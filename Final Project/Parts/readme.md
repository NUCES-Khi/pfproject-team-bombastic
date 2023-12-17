## Saif Ur Rehman - Rohan Serwer - Sajid Ali
 <details><summary>Code 1 (Sajid Ali)</summary>
   
Description: This C program serves as an accessible dictionary, offering a user-friendly interface for managing dictionary entries with various functionalities.

#### Features:

User Authentication: The program includes a login mechanism with password protection to ensure secure access.

#### Main Menu Options:

- Search Words: Allows users to search for specific words in the dictionary.
- Add Words: Permits the addition of new dictionary entries, including word, meaning, part of speech, and sentence.
- List Words: Displays a list of all dictionary entries with details such as word, type, meaning, and sentence.
- Delete Words: Enables users to delete specific words from the dictionary.
- Exit: Allows the user to exit the program.
- Main Page Display: The program presents an informative main page with details such as project contributors' names, the project title ("Accessible Dictionary In C"), and a visually appealing loading screen.

#### Login System:

- The login screen restricts access to authorized users.
- It implements a password-based authentication system with a lockout mechanism after five unsuccessful login attempts.

#### File Handling:

- The dictionary entries are stored in a file named "dictionary.txt."
- The program performs error handling for file operations, ensuring robustness in case of non-existent files or other issues.
- Loading Screen: Enhances the user experience with a loading screen displayed during program initialization.
- Exit Mechanism: The program provides an option to exit gracefully.








  </details>


 <details><summary>Code 2 (Saif Ur Rehman)</summary>


#### Menu Function (void menu())

Description: The menu function presents the main menu of the dictionary program, allowing users to choose from different options.

#### Features:
Colorful Interface: Utilizes the system command to set the console color for a visually appealing interface.

#### Menu Options:
- Search Word: Initiates the search functionality in the dictionary.
- Add Words: Allows users to add new entries to the dictionary.
- Exit: Provides an option to exit the program.
- Input Validation: Ensures that users enter valid option numbers (1, 2, or 3).
- Infinite Loop: The function runs in an infinite loop until the user chooses to exit.

#### Search Function (void search())

Description: The search function enables users to search for specific words in the dictionary.

#### Features:

- User Input: Accepts user input for the word to be searched.
- File Handling: Reads dictionary entries from the file and compares them with the user's input.
- Formatted Output: Displays the search results in a structured and readable format.
- Interactive: Prompts users if they want to search for more words.
- Case Sensitivity: Supports capitalization for the first letter of the entered word.

#### Improvements:

- Formatting Enhancement: Adjusted the formatting of the output to create a more visually appealing display of search results.
- Enhanced User Interaction: Incorporated the getche function for a more interactive experience when deciding whether to search for more words.

  </details>
 <details> <summary>Code 3 (Rohan Serwer)</summary>
  
  ### new1 Function:
Purpose: Allows the user to add new words to the dictionary.

#### Functionality:
- Clears the console screen.
- Displays the current date and the program title.
- Opens the dictionary file in append mode for writing.
- Prompts the user to input word, meaning, part of speech, and sentence for a new entry.
- Appends the entered data to the dictionary file.
- Iterates the process if the user chooses to add more words.
- Closes the file after all entries are made.

### list Function:

Purpose: Displays the contents of the dictionary.
#### Functionality:
- Opens the dictionary file in read mode.
- Displays a formatted list of words, their meanings, part of speech, and sentences.
- Uses a loop to read and print each entry from the file until the end of the file is reached.
- Closes the file after printing the entire list.
- Prompts the user to press any key to return to the main menu.
</details>
