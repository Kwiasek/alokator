#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2024-10-26 12:13:36.682610
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-error=implicit-fallthrough"
      "-std=c11"
      "-pedantic"
      "-Werror"
      "-Wextra"
      "-Wno-error=parentheses"
      "-DINSIDE_DANTE"
      "-Wno-parentheses"
      "-D_ANSI_OUTPUT"
      "-Werror=vla"
      "-D_GNU_SOURCE"
      "-Wall"
      "-fmax-errors=5"
      "-xc"
      "-fdiagnostics-color"
      "-ggdb3"
      "-Wno-error=unused-parameter"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
        "memmanager.c"
        heap.c heap.h)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
)