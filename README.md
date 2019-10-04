# uuid

Generate uuids with janet

## Install

Add to your `project.janet` file

```clojure
{:dependencies [{:repo "https://github.com/joy-framework/uuid" :tag "247bbebf6182963ef8e9048e89ca62aaf10f1c54"}]}
```

## Use

```clojure
(import uuid)

(uuid/generate)
```

This generates an upper case uuid! 🎉
