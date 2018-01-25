# node sandbox

An effort to allow nodejs processes (Kibana, specifically) to increase process security by reducing privileges.

## Build Status: 

* Windows: [![Build status](https://ci.appveyor.com/api/projects/status/677is5ga43sw0hs4?svg=true)](https://ci.appveyor.com/project/jordansissel/node-sandbox)
* Linux: [![Build Status](https://travis-ci.org/elastic/node-sandbox.svg?branch=master)](https://travis-ci.org/elastic/node-sandbox)

## Developing

Building requires you have a compiler environment available. For more details on setting up your build environment, the [node-gyp installation guide](https://github.com/nodejs/node-gyp#installation) is useful.

Building:

```
npm install
```

Testing:

```
npm test
```

