# meta-eosio

This is the [OpenEmbedded](https://openembedded.org) Layer for [EOS.IO](https://eos.io)

The EOS.IO software introduces a new blockchain architecture designed to enable vertical and horizontal scaling of decentralized applications. This is achieved by creating an operating system-like construct upon which applications can be built. The software provides accounts, authentication, databases, asynchronous communication, and the scheduling of applications across many of CPU cores or clusters. The resulting technology is a blockchain architecture that may ultimately scale to millions of transactions per second, eliminates user fees, and allows for quick and easy deployment and maintenance of decentralized applications, in the context of a governed blockchain.

<https://eos.io/>

Please see the corresponding sections below for details.

## Dependencies

 - URI: git://git.openembedded.org/bitbake
 - branch: master
---
 - URI: git://git.openembedded.org/openembedded-core
 - layers: meta
 - branch: pyro
---
 - URI: git://github.com/kraj/meta-clang
 - layers: meta-clang
 - branch: pyro

## Patches

Please submit any patches against the meta-eosio layer to the maintainer:

Bernardo A. Rodrigues <bernardoaraujor@gmail.com>

![gif](https://static.eos.io/images/Landing/SectionTokenSale/eos_spinning_logo.gif "eos.io")
