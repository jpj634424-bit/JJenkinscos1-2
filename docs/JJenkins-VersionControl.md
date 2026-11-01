# Project & Portfolio I: Computer Science - Online

- **Student Name:** Jeremy Jenkins
- **Due Date:** 11/1/26

This paper addresses some of the topics covered in research and activities this week. Reference links to the resources used are provided below.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

**1. Using Terminal, there are essential commands to know.**

- `clear`: Clear the screen

- `pwd`: Print the working directory

- `ls`: List files and folders

- `ls -a`: List files and folders, including hidden files

- `ls -lah`: List all files and folders, including hidden files, in a human-readable format

- `cd foldername`: Change directory to a specific folder

- `cd /`: Change directory to the root directory

- `cd ~`: Change directory to the user's home directory

- `cd ..`: Go up one folder level

- `cd ../..`: Go up two folder levels

- `cd ~/Desktop`: Change directory to my Desktop folder

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

When I first attempted this exercise, I accidentally dragged my Markdown file into Git Bash instead of the folder. This caused an error because the `cd` command only works with directories. After correcting my mistake, I dragged the actual folder into Git Bash, which automatically entered its location. When I pressed Enter, Git Bash successfully changed to that directory. I used the `pwd` command to confirm my location. This exercise helped me understand how to navigate folders more efficiently using Terminal.

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git.

**1. There are three types of version control.**

1. **Local Version Control:** This type of version control
   stores different versions of files on a single computer.
   It allows developers to track their changes and return
   to earlier versions if needed.

2. **Centralized Version Control:** This system uses one
   central server to store project files and their history.
   Multiple developers can access and work on the same
   project, but they depend on the central server being
   available.

3. **Distributed Version Control:** This system allows
   developers to have complete copies of a repository,
   including its history, on their own computers.
   Developers can work independently and share changes
   with others. Git is an example of distributed
   version control.

**2. Using Terminal, there are also essential Git commands to know.**

- `git clone https://github.com/jpj634424-bit/JJenkinscos1-2.git`: Creates a local copy of my GitHub repository on my computer.

- `git config --global user.name "Jeremy Jenkins"`: Sets my name for Git commits.

- `git config --global user.email "jpj634424@gmail.com"`: Sets the email address associated with my Git commits.

- `git status`: Shows which files have been modified, staged, or are untracked.

- `git add .`: Stages all current changes in the repository for the next commit.

- `git commit -m "Updated documentation"`: Saves staged changes with a message describing the updates.

- `git log`: Displays the history of commits made in the repository.

- `git help`: Opens the Git help information.

**3. Connecting to GitHub using Terminal.**

HTTPS is the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

To connect to GitHub using HTTPS, I first open GitHub and find the repository I want to work with. I click the green Code button and copy the HTTPS URL. Next, I open Git Bash on my computer and use the `git clone` command followed by the URL to download the repository. Once the repository is cloned, I use the `cd` command to enter its folder. I can then make changes to my files, use `git add` to stage them, and `git commit` to save those changes locally. Finally, I use `git push` to upload my commits to GitHub. If GitHub asks me to authenticate, I can sign in through Git Credential Manager or use a personal access token when appropriate. Using HTTPS allows me to connect my local project to GitHub and keep my work updated.

**4. Using `.gitignore` and Why It's Important**

Most repositories contain a `.gitignore` file.

**What is the purpose of this file?**

The purpose of a `.gitignore` file is to tell Git which files and folders it should not track. This helps keep unnecessary files out of the repository, such as temporary files, compiled programs, and personal settings. It makes the project more organized and easier to manage when working with other developers.

**What is the `.DS_Store` file and why would you want to ignore it?**

A `.DS_Store` file is a hidden file created by macOS to store information about how a folder is displayed, such as icon positions and view settings. Since this file does not contain anything important for the actual project, it should be ignored by Git. This prevents unnecessary files from being added to the repository.

**What other file or folder would you want to add to a `.gitignore` file and why?**

I would add the `.vs/` folder to my `.gitignore` file because Visual Studio automatically creates it to store temporary files, cached information, and user-specific settings. These files are not needed for other developers to run the project. I have also experienced Git errors involving files inside this folder, so ignoring it would help prevent similar problems in the future.

# Reference Links

**Research Summary**

The resources I found most helpful were the official Git documentation and GitHub guides. They helped me better understand how version control works and why it is important when developing software. I also learned more about using Terminal commands to navigate folders and how Git tracks changes in my projects. The GitHub documentation was especially useful because I could connect what I was reading to the repositories I have already created for my Full Sail courses. Learning about `.gitignore` was also helpful because I have experienced issues with Visual Studio temporary files while using Git. Overall, these resources helped me better understand how developers organize, track, and manage their projects.

**Terminal Commands**  
[GNU Coreutils Documentation](https://www.gnu.org/software/coreutils/manual/coreutils.html)

**Three Types of Version Control**  
[Git - About Version Control](https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control)

**Git Commands**  
[Git Command Reference](https://git-scm.com/docs/git)

**Connecting to GitHub using Terminal**  
[GitHub - Cloning a Repository](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository)

**Using `.gitignore` and Why It's Important**  
[Git - gitignore Documentation](https://git-scm.com/docs/gitignore)
