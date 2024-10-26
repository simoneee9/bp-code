

set(EXE_NAME "bakalarka")

add_executable(${EXE_NAME}
    main.cpp
)

target_compile_features(
    ${EXE_NAME}
    PUBLIC
        cxx_std_23
)

target_include_directories(
    ${EXE_NAME}
    PRIVATE
        include/
)

target_link_libraries(
    ${EXE_NAME}
)
