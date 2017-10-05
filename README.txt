README file for Program 3.

The master branch will be used for the final product and it will be what we submit.
We currently have another branch called Task1 that will be used for the first task, creating the filesystem.

Getting Started:
Type the following command into your 303 directory:

git clone https://github.com/gcc219/P3.git

This gives you the files from the current master branch. These can now be edited like any other files on your machine. Type the following command to switch to the Task1 branch

git checkout Task1

If the local version of Task1 is up to date, you will see a message stating that. Otherwise type the following command to sync with other's work

git pull -u origin Task1

Once up to date, open the files, edit them, do whatever. When you are satisfied with the result, type the following command sequence to push your work back to the repository:

git add *
git commit -m "(Insert Message Here)"
git push -u origin Task1

Potential Problems:

ERROR 403 Access failure:

git remote set-url origin https://yourusername@github.com/gcc219/P3.git


error: failed to push some refs to 'https://github.com/gcc219/P3.git'

This means you have to pull the previous user's changes before you can update the repository.