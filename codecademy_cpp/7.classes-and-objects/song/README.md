# ERROR/S

>[!error] For some reason codecademy can compile this code w/out errors, but it will not compile locally.

>[!success] Correctly compile multi-file projects
> **TLDR;** Ran `g++ music.cpp song.cpp`, *not including `song.hpp` in command*, results in error-free compilation.
> Turns out this is not a compiler version problem or anything like that. I mistakenly believed w/ these multi-file projects I needed to point the `main.cpp`, in this case `music.cpp`, to the compiler.

