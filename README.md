# HAAAAAAAA

To create a git, you first need to download the git:
[Download Git](https://git-scm.com/downloads/win)

Then you have to add it to your gloable variables: 

Umgebungsvariable -> NEU  
Name the Varialbe is z.B. Git
Value the Variable is: "C:\Program Files\Git\cmd" (download path)

## Creating the repository  

After that you have to create a local repository and add your account:  
```c
git init    
git remote add origin https://gitlab.com/<benutzer>/<projekt>.git    
git add .    
git commit -m "Initial commit"    
git push -u origin master    
```


## These are the commands for the next commit

WARNING: use the commands in the correct path "cd C:\Users\danie\Desktop\FH Joanneum\ECE3\ESI"  
```c
git add .  
git commit -m "Commit text"    
git push  
```




