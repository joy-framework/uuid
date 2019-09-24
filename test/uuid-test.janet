(import tester :prefix "" :exit true)
(import build/uuid :as uuid)


(deftest
  (test "a uuid gets generated"
    (= 36 (length (uuid/generate)))))

(print (uuid/generate))
