(import tester :prefix "" :exit true)
(import build/uuid :as uuid)


(deftest
  (test "a uuid gets generated"
    (= 37 (length (uuid/generate)))))
