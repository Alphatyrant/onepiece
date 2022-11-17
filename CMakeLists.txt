cmake_minimum_required(VERSION 3.9)

project(onepiece C)


# Exibindo dados de compilacao
message ( " => Processando ${CMAKE_CURRENT_BINARY_DIR}")
message ( " => Compilador: ${CMAKE_C_COMPILER}")
message ( " => Fonte:      ${PROJECT_SOURCE_DIR}" ) 
message ( " => Binary:     ${PROJECT_BINARY_DIR}/build" )
message ( " => Library:    ${CMAKE_SOURCE_DIR}/lib" )

# Definição dos arquivos
set(SOURCE_FILES
    src/onepiece.c
)

# Executavel
add_executable(onepiece ${SOURCE_FILES})
set_target_properties(onepiece PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/build")

# Add a custom target to make run
add_custom_target(run
    COMMAND onepiece
    DEPENDS onepiece
    WORKING_DIRECTORY ${PROJECT_BINARY_DIR}/build
)