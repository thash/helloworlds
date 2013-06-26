(ns hello.core)

(defn -main []
  (println "hello, world"))

(defn tail [lst]
  (if (empty? (rest lst))
    (first lst)
    (recur (rest lst))))

