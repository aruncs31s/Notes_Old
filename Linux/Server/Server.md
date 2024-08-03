---
id: Server
aliases:
  - home server
tags: []
---

# Home Server

#### Objective

My objective is to make a server that can be accessible trough a web browser and it should support uploading files

- User : [This repo](https://github.com/Wildog/flask-file-server?tab=readme-ov-file)

### Authention

Authention is provided in the code in the form of `user:passwd` so i have to encode the key=user:passwd using openssl

```bash
echo -n 'user:passwd' | openssl base64
```
