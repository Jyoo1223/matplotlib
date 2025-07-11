import matplotlib.pyplot as plt

# Data for the plot
x = [1, 2, 3, 4, 5]           # X-axis values
y = [1, 4, 9, 16, 25]         # Y-axis values (e.g., squares of x)

# Create a line plot
plt.plot(x, y)

# Add labels and title
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Simple Plot')

# Show the plot
plt.show()
