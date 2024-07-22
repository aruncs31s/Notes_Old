- [Get random address at boot]()

#### Get random Mac at boot 


##### Manual
```bash
 sudo systemclt stop NetworkManager
 sudo macchanger -r wlan0 
 sudo iwlist scan wlan0
 sudo iwconfig wlan0 essid "Wifi ESSID"
 sudo dhclient wlan0
```

> [!WARNING] Default Behaviour
> The default behavior of the `NetworkManger` is that it reverts back to origina as soon as it connect to a wifi so it's better to use `iwlist` to scan the nearby wifi AP and `iwconfig` to connect to a wifi and `dhclient` to obtain the ip address and other stuff


