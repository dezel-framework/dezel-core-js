// swift-tools-version:5.1
import PackageDescription

let package = Package(

    name: "DezelCoreJS",

    platforms: [
		.iOS(.v11)
    ],

    products: [
		.library(
			name: "DezelCoreJS",
			targets: ["DezelCoreJS"]
		),
    ],

	targets: [ 

		.target(
			name: "DezelCoreJS",
			dependencies: [],
			path: "src"
		)
    ],

    cLanguageStandard: .gnu11,

    cxxLanguageStandard: .cxx1z
)
