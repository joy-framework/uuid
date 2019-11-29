# uuid

Generate uuids with janet

## Install

Add to your `project.janet` file

```clojure
{:dependencies [{:repo "https://github.com/joy-framework/uuid" :tag "f212b1936688ee5acae98bd87124ba60de324149"}]}
```

## Use

```clojure
(import uuid)

(uuid/generate)
```

This generates an upper case uuid! 🎉
