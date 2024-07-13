#### Automatic Wifi Connect 
[Source](https://www.tech-sparks.com/raspberry-pi-auto-connect-to-wifi/#:~:text=Edit%20wpa_supplicant.,conf&text=When%20you%20need%20to%20connect,networks%20by%20modifying%20their%20details.)
1. need to edit the `wpa_supplicant.conf` placed at `/etc/`
```bash
update_config=1
ap_scan=1
network={
    ssid="Your_SSID_1"
    psk="Your_Password_1"
    key_mgmt=WPA-PSK
}
```
- create the `/etc/systemd/system/wpa_supplicant.service` 
