add_executable(${PROJECT_NAME}
    main.cpp
    ./ap/LightStand/LightStand.cpp
    ./ap/Listener/ButtonListener.cpp
    ./ap/Service/StandService.cpp
    ./ap/View/LightView.cpp
    ./hw/Led/Led.cpp
    ./hw/Button/Button.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ./
    ./ap
    ./ap/LightStand
    ./ap/Listener
    ./ap/Service
    ./ap/View
    ./hw
    ./hw/Led
    ./hw/Button
)

target_compile_options(${PROJECT_NAME} PUBLIC
    -Wall
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    -lwiringPi
)