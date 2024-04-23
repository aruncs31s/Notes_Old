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
