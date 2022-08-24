cmake_minimum_required(VERSION 3.12)
set(namespace "packets_230_340_360")
project("packets_230_340_360"
        DESCRIPTION "Common packets for versions 2.3.0, 3.4.0 and 3.6.0"
        VERSION 1.0.0
        )
if (NOT CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    message(STATUS "This project has a top-level one called [${CMAKE_PROJECT_NAME}]")
else()
    message(STATUS "This project is a top-level one")
endif()
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_PREFIX_PATH "../variables_230_340_360/install")
find_package(variables_230_340_360 CONFIG REQUIRED)
include(GNUInstallDirs)
add_library(${PROJECT_NAME} SHARED)
target_sources(${PROJECT_NAME}
        PRIVATE
        src/TrackPacket15Base.cpp
        src/NotPacketException.cpp
        src/Packet.cpp
        src/PacketQDir.cpp
        src/PacketQDirQScale.cpp
        src/TrackPacket39Base.cpp
        src/TrackPacket71.cpp
        src/TrackPacket57.cpp
        src/TrackPacket58.cpp
        src/TrackPacket45.cpp
        src/TrackPacket131.cpp
        src/TrackPacket138.cpp
        src/TrackPacket139.cpp
        src/TrackPacket42.cpp
        src/TrackPacket65.cpp
        src/TrackPacket66.cpp
        src/QDangerpointIf.cpp
        src/QDangerpoint0.cpp
        src/QDangerpoint1.cpp
        src/QEndtimerIf.cpp
        src/QEndtimer0.cpp
        src/QEndtimer1.cpp
        src/QOverlapIf.cpp
        src/QOverlap0.cpp
        src/QOverlap1.cpp
        src/QSectiontimerIf.cpp
        src/QSectiontimer0.cpp
        src/QSectiontimer1.cpp
        )
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src PUBLIC  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
target_link_libraries(${PROJECT_NAME} PRIVATE variables_230_340_360::variables_230_340_360)
if(DEFINED CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    message(
            STATUS
            "CMAKE_INSTALL_PREFIX is not set\n"
            "Default value: ${CMAKE_INSTALL_PREFIX}\n"
            "Will set it to ${CMAKE_SOURCE_DIR}/install"
    )
    set(CMAKE_INSTALL_PREFIX
            "${CMAKE_SOURCE_DIR}/install"
            CACHE PATH "Where the library will be installed to" FORCE
            )
else()
    message(
            STATUS
            "CMAKE_INSTALL_PREFIX was already set\n"
            "Current value: ${CMAKE_INSTALL_PREFIX}"
    )
endif()
set(public_headers
        include/copy_ptr.hpp
        include/TrackPacket15Base.hpp
        include/NotPacketException.hpp
        include/Packet.hpp
        include/PacketQDir.hpp
        include/PacketQDirQScale.hpp
        include/TrackPacket39Base.hpp
        include/TrackPacket71.hpp
        include/TrackPacket57.hpp
        include/TrackPacket58.hpp
        include/TrackPacket45.hpp
        include/TrackPacket131.hpp
        include/TrackPacket138.hpp
        include/TrackPacket139.hpp
        include/TrackPacket42.hpp
        include/TrackPacket65.hpp
        include/TrackPacket66.hpp
        include/QDangerpointIf.hpp
        include/QDangerpoint0.hpp
        include/QDangerpoint1.hpp
        include/QEndtimerIf.hpp
        include/QEndtimer0.hpp
        include/QEndtimer1.hpp
        include/QOverlapIf.hpp
        include/QOverlap0.hpp
        include/QOverlap1.hpp
        include/QSectiontimerIf.hpp
        include/QSectiontimer0.hpp
        include/QSectiontimer1.hpp
        )
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "${public_headers}")
set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX "d")
install(TARGETS ${PROJECT_NAME}
        EXPORT "${PROJECT_NAME}Targets"
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
        INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR} 
        )
install(EXPORT "${PROJECT_NAME}Targets"
        FILE "${PROJECT_NAME}Targets.cmake"
        NAMESPACE ${namespace}::
        DESTINATION cmake
        )

include(CMakePackageConfigHelpers)

# generate the version file for the config file
write_basic_package_version_file(
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
        VERSION "${version}"
        COMPATIBILITY AnyNewerVersion
)
# create config file
configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
        INSTALL_DESTINATION cmake
        )
# install config files
install(FILES
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
        DESTINATION cmake
        )
# generate the export targets for the build tree
export(EXPORT "${PROJECT_NAME}Targets"
        FILE "${CMAKE_CURRENT_BINARY_DIR}/cmake/${PROJECT_NAME}Targets.cmake"
        NAMESPACE ${namespace}::
        )