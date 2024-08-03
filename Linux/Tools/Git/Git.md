---
id: Git
aliases: []
tags: []
banner: https://github.blog/wp-content/uploads/2023/05/1200.630-Security-wLogo.png?w=1200
banner_y: 0.552
cssclasses:
  - wide-page
---

# Git

- [[1722694456-PFUM|Branchers]]

- [Introduction](#introduction)
- [Installation](#installation)
- [Initial Setup](#initial%20setup)
- [Basics](#basics)
  - [Getting a Git repo]()
  - [[#Kick Start]]
  - [Submitting that change]()
- [[#Dropping Commits]]
- [[#Merge Conflict]]
- [[#Advanced]]
  - [[#aliasing]]
  -

### **Introduction**

Git is a `source control` created for the `Linux` Kernel by `Linus Torvalds`.

<details>
<summary>More</summary>
    Git works the familiar primitives of source control management systems such as `commits`, `diffs`,`trunks`, `tags`, branches, and so on. However, Git has the intrinsic property of being a distributed system - a system in which there is no official client/server relationship. Each repository contains the entire history of revisions. This means that there's no need to have network access or synchronization to a central repository. In essence, a git repository is nonlinear with regard to revisions. two different users may change source code in unique, independent ways without interfering with each other. one benefit of this model is that developers are freer to independently work with, experiment with, and tweak code.
	Git supports independent development and revision management, it also supports the means to share and incorporate revisions made in unsynchronized repositories.
</details>

###### summary

- Git is a VCS(version control system)
<details><summary>VCS</summary>
</details>
- Git stores data as snapshots and if file is not changed

---

### **Installation**

- Windows [Click Here](https://git-scm.com/download/win)
- Debian

```bash
sudo apt install git
```

- Fedora

```bash
sudo dnf install git
```

- Arch Linux

```
sudo pacman -S git
```

---

### **Initial Setup**

This only required to do once like configuring user email and user name .

- Setting up you identity

```
git config --global user.name "You name"
git config --global user.email youremail@google.com
```

_You can exclude `--global` flag it sets this properties as global but if you want to keep repository wise configs you simply exclude that_

- You can use the following to see saved configs

```bash
git config --list
```

---

### **Basics**

- [Creatig a repo](#creating%20a%20repo)
- [[#Kick Start]]
- [[#Git Stash]]

#### Creating a repo

- [[Branch]]

- [Merge Conflict](#mergeconflict)

#### Kick Start

- To upload local folder/repo to `github`

```bash
echo "# tic_tac_toe" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/BloBuster/tic_tac_toe.git
git push -u origin main
```

- Push existing repo

```bash
git remote add origin https://github.com/BloBuster/tic_tac_toe.git
git branch -M main
git push -u origin main
```

#### Merge Conflict

#### Dropping Commits

Consider if you added your password file in you commit accidentally(like i did once) and want to delete that `commit history` from git

1. **Identity the commit**

```bash
git log
```

2. **Start interactive Rebase**

```bash
git rebase -i HEAD~x
```

_where x is the no. of commits back_ 3. **Use `drop` to drop the commit**

```
drop xyz123123
```

save the file and exit 4.

```bash
git rebase --continue
```

5.

```bash
git push origin <branch name>
```

##### Deleting the most recent commit

1. **Delete it from local**

```bash
git reset --hard HEAD~1
```

2. Force push to remote

```bash
git push origin <branch_name> --force
```

[Source](https://graphite.dev/guides/how-to-delete-a-git-commit)

- [[Merge Conflict]]

#### Merge Conflict

```bash
git log --merge 
```

The `git log --merge` command helps to produce the list of commits that are causing the conflict

```bash
git diff
```

To identify state of repocitories or files

```bash
git checkout 
```

The git checkout command is used to undo the changes made to the file, or for changing branches.

```bash
git merge --abort
```

Cancels the merge and return back to origina state before merge was started

```bash
git reset
```

#### Creating a new branch with an existing branch files

1. First, ensure you're on the main branch:

```bash
git checkout main
```

2. Then, create a new branch `obsidian_files_back` from the current state of the `obsidian` branch:

```bash
git checkout -b obsidian_files_back obsidian
```

This command creates a new branch named `obsidian_files_back` starting from the current state of the `obsidian` branch. All the contents present in the obsidian branch will be copied to this new branch.

3. Now, you can push this new branch to your remote repository if needed:

```bash
git push origin obsidian_files_back
```

This will push the new branch obsidian_files_back to your remote repository, making it available to others if you're collaborating on this repository

#### Deleting A branch

1. locally

```bash
git branch -d branch_name
```

2. Remotely

```bash
git push origin --delete branch_name
```

#### Git Stash

```bash
git stash list
```

- To show the `stashes`

```bash
git stash show <stash index>
```

```bash
git stash pop
```

```bash
git stash drop
```

```bash
git stash apply
```

### Advanced

##### aliasing

```bash
git config --global alias.staash 'stash --all'
```

#example

```bash
git config --global alias.po 'push origin main'
```

> [!floating|right-medium]
> we can also use `!script name.sh` instead of the normal git command

#example

```bash
git config --global alias.something !some_script.sh
```

#### Blame

```bash
git blame -L x_1,x_2
```

git blame of specific lines where x_1 , x_2 indicating seperate lines

```bash
git blame -w -C -C -C
```

- ignore white spaces
- detect lines moved or copied in the same commit
- commit that created the file
- any commit at all.
