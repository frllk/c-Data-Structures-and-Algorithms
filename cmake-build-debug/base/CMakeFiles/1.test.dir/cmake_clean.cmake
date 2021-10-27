file(REMOVE_RECURSE
  "1.test.exe"
  "1.test.exe.manifest"
  "1.test.pdb"
  "CMakeFiles/1.test.dir/1.test.c.obj"
  "lib1.test.dll.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang C)
  include(CMakeFiles/1.test.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
