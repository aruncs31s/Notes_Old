---
id: Server
aliases:
  - home server
tags: []
---

# Home Server
###### Steps i had to take 
- turn on usb tethering on my `OP`
- go to `network manager`(nm-applet) -> any_ethernet network settings -> Share this computer internet ->
- IP configuration 
```json
config {
ip: 192.168.1.2
subnet: 24 or 255.255.255.255,
gateway: 192.168.1.1
	}
```

contd....

#### Objective

My objective is to make a server that can be accessible trough a web browser and it should support uploading files

- User : [This repo](https://github.com/Wildog/flask-file-server?tab=readme-ov-file)

### Authention

Authention is provided in the code in the form of `user:passwd` so i have to encode the key=user:passwd using openssl

```bash
echo -n 'user:passwd' | openssl base64
```



## References
- [[IP Forwarding]] : Enabling IP Forwarding
- 