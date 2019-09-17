# uuid

Generate uuids with janet

## Install

Add to your `project.janet` file

```clojure
{:dependencies [{:repo "https://github.com/joy-framework/uuid" :tag "27975ccd1c384b18e640315c75b51282586cf463"}]}
```

## Use

```clojure
(import uuid)

(uuid/generate)
```

This generates an upper case uuid! 🎉
