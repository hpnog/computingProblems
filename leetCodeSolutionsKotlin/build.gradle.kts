import org.jetbrains.kotlin.gradle.tasks.KotlinCompile

plugins {
    application
    kotlin("jvm") version "1.3.61"
    jacoco
}

repositories {
    mavenCentral()
}

dependencies {
    implementation(kotlin("stdlib-jdk8"))
    testImplementation(kotlin("test-junit"))
}

jacoco {
    toolVersion = "0.8.4"
    reportsDir = file("./reports")
}

tasks.jacocoTestReport {
        reports {
                xml.isEnabled = true
                csv.isEnabled = true
                html.isEnabled = true
        }
}

tasks.test {
    finalizedBy(tasks.jacocoTestReport)

    testLogging {
        events("passed", "failed", "skipped")

    }
    useJUnitPlatform()
}

val compileKotlin: KotlinCompile by tasks
val compileTestKotlin: KotlinCompile by tasks

tasks.withType<KotlinCompile> {

    sourceCompatibility = "1.8"
    targetCompatibility = "1.8"

    kotlinOptions {
        jvmTarget = "1.8"
        apiVersion = "1.3"
        languageVersion = "1.3"
        allWarningsAsErrors = true
    }
}