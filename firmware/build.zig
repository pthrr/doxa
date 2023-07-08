const std = @import("std");
const rp2040 = @import("ext/raspberrypi-rp2040/build.zig");
const microzig = @import("ext/microzig/build.zig");

pub fn build(b: *std.build.Builder) !void {
    const optimize = b.standardOptimizeOption(.{});

    var exe = microzig.addEmbeddedExecutable(b, .{
        .name = "firmware",
        .source_file = .{
            .path = "src/main.zig",
        },
        .backing = .{
            .board = rp2040.boards.raspberry_pi_pico,
        },
        .optimize = optimize,
    });

    exe.installArtifact(b);
}
