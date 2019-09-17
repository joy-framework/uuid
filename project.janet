(declare-project
  :name "uuid"
  :description "A uuid lib for janet"
  :author "Sean Walker"
  :license "MIT"
  :dependencies [{:repo "https://github.com/joy-framework/tester" :tag "c14aff3591cb0aed74cba9b54d853cf0bf539ecb"}]
  :url "https://github.com/joy-framework/uuid"
  :repo "git+https://github.com/joy-framework/uuid")


(declare-native
  :name "uuid"
  :source @["uuid.c"])
