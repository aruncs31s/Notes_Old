#### Example 

```python
import tweepy

auth = tweepy.OAuth1UserHandler(
    consumer_key, consumer_secret, access_token, access_token_secret
)

api = tweepy.API(auth)

public_tweets = api.home_timeline()
for tweet in public_tweets:
    print(tweet.text)
```


1. **By X dev Platform**
```python 
import base64
import hashlib
import os
import re
import requests
import tweepy
from requests_oauthlib import OAuth2Session
from flask import Flask, request, redirect, session, url_for, render_template
```

2. **By Project Raspberry pi**

```python
from twython import Twython
from auth import (
    consumer_key,
    consumer_secret,
    access_token,
    access_token_secret
)

twitter = Twython(
    consumer_key,
    consumer_secret,
    access_token,
    access_token_secret
)

message = "Hello World!"
twitter.update_status(status=message)
print("Tweeted: " + message)
```

3. **By Geeks for Geeks** 
```python
`# importing the module`

`import` `tweepy`

`# personal details`

`consumer_key` `=``"xxxxxxxxxxxxxxxx"`

`consumer_secret` `=``"xxxxxxxxxxxxxxxx"`

`access_token` `=``"xxxxxxxxxxxxxxxx"`

`access_token_secret` `=``"xxxxxxxxxxxxxxxx"`

`# authentication of consumer key and secret`

`auth` `=` `tweepy.OAuthHandler(consumer_key, consumer_secret)`

`# authentication of access token and secret`

`auth.set_access_token(access_token, access_token_secret)`

`api` `=` `tweepy.API(auth)`

`# update the status`

api.update_status(status="Hello Everyone !")

```
## References
1. https://developer.twitter.com/en/docs/tutorials/tweeting-media-v2
2. https://docs.tweepy.org/en/stable/
3. https://www.google.com/amp/s/www.geeksforgeeks.org/tweet-using-python/amp/
4. 