<a href="https://mod.io"><img src="https://static.mod.io/v1/images/branding/modio-color-dark.svg" alt="mod.io" width="360" align="right"/></a>
# mod.io UE4 Example
[![License](https://img.shields.io/badge/license-MIT-brightgreen.svg)](https://github.com/modio/modio-ue4-example/blob/master/LICENSE)
[![Discord](https://img.shields.io/discord/389039439487434752.svg?label=Discord&logo=discord&color=7289DA&labelColor=2C2F33)](https://discord.mod.io)
[![Master docs](https://img.shields.io/badge/docs-master-green.svg)](https://github.com/modio/modio-ue4/wiki)

## NOTE
This repository is currently **unmaintained** and may not work with the latest version of the Unreal Engine. If you have questions or need support implementing mod.io support for your Unreal Engine project, join us on [Discord](https://discord.mod.io) and our team will be happy to assist you.

## Usage
Authenticate via e-mail to enable automatic downloads when subscribing to mods.

## Email auth flow
Input a security code sent your email to authenticate.

![Alt text](img/email_flow.png?raw=true "Title")

## Automatic downloads
Once authenticated, mods will sync every time you subscribe to them via [API](https://docs.mod.io), [web](https://mod.io) or [plugins](https://github.com/modio/modio-ue4).

![Alt text](img/downloads.png?raw=true "Title")

## Project Settings
This project connects to the [Example Game](https://example.test.mod.io) by default. Connect it to your game by grabbing your games's `Game Id` and `Api Key` from the [mod.io web](https://mod.io) and placing them on your editor's mod.io settings.

![Alt text](img/settings.png?raw=true "Title")

## Going further
mod.io offers robust mod functionality for your moddable game. This includes ratings, dependencies, tags, prebuilt mod download and upload queue, GOG and steam auth. See the [usage guide](https://github.com/modio/modio-ue4#usage) or the complete [wiki documentation](https://github.com/modio/modio-ue4/wiki) to learn more about the mod.io UE4 integration. If you're completely new to mod.io refer to the [getting started](https://mod.io/blog/getting-started) guide instead.

## Running

1. Clone this repo.

```
git clone https://github.com/modio/modio-ue4-example.git
```

2. Manually insert the files for the plugin from the Modio folder into `Plugins\UE4Plugin`. Once gotten from the UE4 Marketplace, the plugin files can be found at a file path similar to this: `D:\Program Files\Epic Games\UE_4.23\Engine\Plugins\Marketplace\modio`.

Alternatively, download the plugin files via git submodules:

```
git submodule update --init --recursive
```

3. Compile and run by double clicking `ModioExample.uproject`.
