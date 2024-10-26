

set(EXE_NAME "bakalarka")

add_executable(${EXE_NAME}
    main.cpp

    app.cpp
    log.cpp
    renderer.cpp
    window.cpp
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
        GLEW::GLEW
        glut
        glm::glm
        glfw
)
