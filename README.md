<a href="https://mod.io"><img src="https://static.mod.io/v1/images/branding/modio-color-dark.svg" alt="mod.io" width="360" align="right"/></a>
# mod.io UE4 Example
[![License](https://img.shields.io/badge/license-MIT-brightgreen.svg)](https://github.com/modio/UE4Example/blob/master/LICENSE)
[![Discord](https://img.shields.io/discord/389039439487434752.svg?label=Discord&logo=discord&color=7289DA&labelColor=2C2F33)](https://discord.mod.io)
[![Master docs](https://img.shields.io/badge/docs-master-green.svg)](https://github.com/modio/UE4Plugin/wiki)

# Usage

Authenticate via e-mail to enable automatic downloads when subscribing to mods.

## Email auth flow

Input a security code sent your email to authenticate.

## Automatic download queue

Once authenticated, mods will be downloaded autmatically every time you subscribe via [API](https://docs.mod.io/), [web](https://mod.io/) or [plugins](https://github.com/modio/UE4Plugin).

# Going further

mod.io offers robust mod functionality for your moddable game. This includes ratings, dependencies, tags, prebuilt mod download and upload queue, GOG and steam auth. See the [usage guide](https://github.com/modio/UE4Plugin#usage) or the complete [wiki documentation](https://github.com/modio/UE4Plugin/wiki) to learn more. If you're completely new to mod.io refer to the [getting started](https://apps.mod.io/guides/getting-started) guide instead.

# Building

Clone and download the mod.io plugin submodule, then build and run.

```
git clone https://github.com/modio/UE4Example.git # download the project
cd UE4Example
git submodule update # download the mod.io plugin submodule
```

Compile and run by double clicking ModioExample.uproject.
