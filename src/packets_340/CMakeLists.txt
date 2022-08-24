cmake_minimum_required(VERSION 3.12)
set(namespace "packets_340")
project("packets_340"
        DESCRIPTION "Packets for version 3.4.0"
        VERSION 1.0.0
        )
if (NOT CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    message(STATUS "This project has a top-level one called [${CMAKE_PROJECT_NAME}]")
else()
    message(STATUS "This project is a top-level one")
endif()
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include(GNUInstallDirs)
add_library(${PROJECT_NAME} SHARED)
target_sources(${PROJECT_NAME}
        PRIVATE
        src/null.cpp
        )
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src PUBLIC  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
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
        include/AllPackets.hpp
        include/copy_ptr.hpp
        include/MVoltageFollow.hpp
        include/MVoltageIf.hpp
        include/MVoltageNotFollow.hpp
        include/NotPacketException.hpp
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
        include/TrackPacket131.hpp
        include/TrackPacket138.hpp
        include/TrackPacket139.hpp
        include/TrackPacket15.hpp
        include/TrackPacket39.hpp
        include/TrackPacket40.hpp
        include/TrackPacket42.hpp
        include/TrackPacket45.hpp
        include/TrackPacket57.hpp
        include/TrackPacket58.hpp
        include/TrackPacket64.hpp
        include/TrackPacket65.hpp
        include/TrackPacket66.hpp
        include/TrackPacket71.hpp
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