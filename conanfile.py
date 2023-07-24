from pathlib import Path

from conan import ConanFile
from conan.tools.cmake import CMake, CMakeDeps, CMakeToolchain


class QtConan(ConanFile):
    name = "Students-UI"
    version = "1.0.0"
    settings = "os", "compiler", "build_type", "arch"
    exports_sources = "CMakeLists", "src/*"


    def requirements(self):
        self.requires("qt/6.5.0")

    def configure(self):
        self.options["qt/*"].qtdeclarative = True
    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def generate(self):
        deps = CMakeDeps(self)
        deps.generate()
        tc = CMakeToolchain(self)
        tc.variables["binaryDir"] = Path(__file__).parent / "build"
        tc.generate()

    def package(self):
        cmake= CMake(self)
        cmake.install()
