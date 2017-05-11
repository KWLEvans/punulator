# Punulator

Are you ready to have some pun! Finally, a blog-like site for pun lovers and pun critics alike. Post your favorite word play and share them with... at least some other people.

## Prerequisites

You will need one of the following server management programs properly installed on your computer.

* [MAMP](https://www.mamp.info/en/)
* [WAMP](http://www.wampserver.com/en/)
* [LAMP](https://www.apachefriends.org/index.html)

## Installation

**Hosted**: This site is hosted on Puntheon [here]()

**-Or to run locally-**

**Step 1**: Clone this repository to your local computer

```console
git clone https://github.com/KWLEvans/punulator.git
```

**Step 2**: Using your server management software, import the `punulator.sql.zip` file from `/sites/db-backup`

**Step 3**: Create a new user on the database using username: 'adminPun' and password: 'password'; you can double check in sites/default/settings.php

**Step 4**: Ensure that your web server software's document root is set to the project's root directory and that the MySQL port is set to 8889

**Step 5**: Visit the app at [http://localhost:8889](http://localhost:8889).

## License

MIT License. Copyright 2017 Keith Evans
