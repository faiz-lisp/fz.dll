
# 
```
gcc -w ../src/c/fz.c -fPIC -shared -o fz.dll
;g++ -w ../src/c/fz.cpp -fPIC -shared -o fz.cpp.dll


dumpbin /exports fz.dll


newlisp
  ;def dsls
  (def (imp-cdecl-fns lib fnlis)
    (map
      (lam (g)
        (redu imp
          (map str(li lib g 'cdecl)) )) ;
      fnlis
  ) )
  (def (symcat .head .sym)
    (sym(redu str (map str(li .head .sym))))
  )
  (def (impfz lib fz-fns)
    (imp-cdecl-fns lib (map (curry symcat 'fz_) fz-fns))
  )
  ;main test
  (impfz 'fz.dll '(add cmp echol strHead))
  (get-string(fz_strHead "asd" 2)) ;=> "as"
```